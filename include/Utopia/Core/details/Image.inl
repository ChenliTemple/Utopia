#pragma once

namespace Ubpa::Utopia {
	template<typename T, typename>
	T& Image::At(size_t x, size_t y, size_t d) {
		assert(T::N == channel);
		return reinterpret_cast<T&>(At(x, y, 0, d));
	}

	template<typename T, typename>
	const T& Image::At(size_t x, size_t y, size_t d) const {
		return const_cast<Image*>(this)->At<T>(x, y, 0, d);
	}

	template<typename T, typename>
	void Image::SetAll(const T& color) {
		if constexpr (std::is_same_v<T, float>) {
			for (size_t i = 0; i < width * height * depth * channel; i++)
				data[i] = color;
		}
		else {
			for (size_t j = 0; j < height; j++) {
				for (size_t i = 0; i < width; i++) {
					for (size_t d = 0; d < depth; d++) {
						At<T>(i, j, d) = color;
					}
				}
			}
		}
	}
}