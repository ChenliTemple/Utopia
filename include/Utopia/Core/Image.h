#pragma once

#include <UGM/rgba.h>
#include <UGM/point.h>

#include <UDP/Basic/Read.h>

#include "Object.h"

#include <string>

namespace Ubpa::Utopia {
	class Image : public Object {
	public:
		Read<Image, float*> data{ nullptr };
		Read<Image, size_t> width{ static_cast<size_t>(0) };
		Read<Image, size_t> height{ static_cast<size_t>(0) };
		Read<Image, size_t> channel{ static_cast<size_t>(0) };
		Read<Image, size_t> depth{ static_cast<size_t>(1) };

		Image() = default;
		~Image();
		Image(const std::string& path, bool flip = false);
		Image(size_t width, size_t height, size_t channel, size_t depth = 1);
		Image(size_t width, size_t height, size_t channel, size_t depth, const float* data);
		Image(size_t width, size_t height, size_t channel, const float* data)
			: Image(width, height, channel, 1, data) {}
		Image(Image&& image) noexcept;
		Image(const Image& image);
		Image& operator=(Image&& image) noexcept;
		Image& operator=(const Image& image);

		bool Init(const std::string& path, bool flip = false);
		void Init(size_t width, size_t height, size_t channel, size_t depth = 1);
		void Init(size_t width, size_t height, size_t channel, size_t depth, const float* data);
		void Init(size_t width, size_t height, size_t channel, const float* data) { Init(width, height, channel, 1, data); }
		
		template<typename T, // float, rgbf or rgbaf
			typename = std::enable_if_t<
			std::is_same_v<T, float>
			|| std::is_same_v<T, rgbf>
			|| std::is_same_v<T, rgbaf>>>
		void SetAll(const T& color);
		// png, bmp, tga, jpg, hdr
		bool Save(const std::string& path, bool flip = false, size_t depthIdx = 0) const;
		void Clear();

		bool IsValid() const noexcept;

		float& At(size_t x, size_t y, size_t c, size_t d = 0);
		const float& At(size_t x, size_t y, size_t c, size_t d = 0) const;
		const rgbaf At(size_t x, size_t y, size_t d = 0) const;
		template<typename T, // float, rgbf or rgbaf
			typename = std::enable_if_t<
			std::is_same_v<T, float>
			|| std::is_same_v<T, rgbf>
			|| std::is_same_v<T, rgbaf>>>
		T& At(size_t x, size_t y, size_t d = 0);
		template<typename T, // float, rgbf or rgbaf
			typename = std::enable_if_t<
			std::is_same_v<T, float>
			|| std::is_same_v<T, rgbf>
			|| std::is_same_v<T, rgbaf>>>
		const T& At(size_t x, size_t y, size_t d = 0) const;

		const rgbaf SampleNearest(const pointf2& uv) const;
		const rgbaf SampleLinear(const pointf2& uv) const;
	};
}

#include "details/Image.inl"
