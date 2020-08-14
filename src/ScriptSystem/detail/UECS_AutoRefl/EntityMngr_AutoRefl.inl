// This file is generated by Ubpa::USRefl::AutoRefl

#pragma once

#include <USRefl/USRefl.h>

template<>
struct Ubpa::USRefl::TypeInfo<Ubpa::UECS::EntityMngr>
    : Ubpa::USRefl::TypeInfoBase<Ubpa::UECS::EntityMngr>
{
    static constexpr AttrList attrs = {};

    static constexpr FieldList fields = {
        Field{"Create",
            static_cast<Ubpa::UECS::Entity(Ubpa::UECS::EntityMngr::*)(const Ubpa::UECS::CmptType*, size_t)> (&Ubpa::UECS::EntityMngr::Create),
            AttrList {
                Attr{UBPA_USREFL_NAME_ARG(0),
                    AttrList{
                        Attr{Name::name, "types"},
                    }
                },
                Attr{UBPA_USREFL_NAME_ARG(1),
                    AttrList{
                        Attr{Name::name, "num"},
                    }
                },
            }
        },
        Field{"Instantiate", &Ubpa::UECS::EntityMngr::Instantiate,
            AttrList {
                Attr{UBPA_USREFL_NAME_ARG(0)},
            }
        },
        Field{"Attach",
            static_cast<void(Ubpa::UECS::EntityMngr::*)(Ubpa::UECS::Entity, const Ubpa::UECS::CmptType*, size_t)> (&Ubpa::UECS::EntityMngr::Attach),
            AttrList {
                Attr{UBPA_USREFL_NAME_ARG(0)},
                Attr{UBPA_USREFL_NAME_ARG(1),
                    AttrList{
                        Attr{Name::name, "types"},
                    }
                },
                Attr{UBPA_USREFL_NAME_ARG(2),
                    AttrList{
                        Attr{Name::name, "num"},
                    }
                },
            }
        },
		Field{"Detach", &Ubpa::UECS::EntityMngr::Detach,
            AttrList {
                Attr{UBPA_USREFL_NAME_ARG(0)},
                Attr{UBPA_USREFL_NAME_ARG(1),
                    AttrList{
                        Attr{Name::name, "types"},
                    }
                },
                Attr{UBPA_USREFL_NAME_ARG(2),
                    AttrList{
                        Attr{Name::name, "num"},
                    }
                },
            }
        },
        Field{"Have", &Ubpa::UECS::EntityMngr::Have,
            AttrList {
                Attr{UBPA_USREFL_NAME_ARG(0)},
                Attr{UBPA_USREFL_NAME_ARG(1)},
            }
        },
		Field{"Get", &Ubpa::UECS::EntityMngr::Get,
            AttrList {
                Attr{UBPA_USREFL_NAME_ARG(0)},
                Attr{UBPA_USREFL_NAME_ARG(1)},
            }
        },
        Field{"Components", &Ubpa::UECS::EntityMngr::Components,
            AttrList {
                Attr{UBPA_USREFL_NAME_ARG(0)},
            }
        },
        Field{"Exist", &Ubpa::UECS::EntityMngr::Exist,
            AttrList {
                Attr{UBPA_USREFL_NAME_ARG(0)},
            }
        },
        Field{"Destroy", &Ubpa::UECS::EntityMngr::Destroy,
            AttrList {
                Attr{UBPA_USREFL_NAME_ARG(0)},
            }
        },
        Field{"EntityNum", &Ubpa::UECS::EntityMngr::EntityNum,
            AttrList {
                Attr{UBPA_USREFL_NAME_ARG(0)},
            }
		},
		Field{"LocateSingletons", &Ubpa::UECS::EntityMngr::LocateSingletons,
			AttrList {
				Attr{UBPA_USREFL_NAME_ARG(0)},
			}
		},
		Field{"IsSingleton", &Ubpa::UECS::EntityMngr::IsSingleton,
			AttrList {
				Attr{UBPA_USREFL_NAME_ARG(0)},
			}
		},
		Field{"GetSingletonEntity", &Ubpa::UECS::EntityMngr::GetSingletonEntity,
			AttrList {
				Attr{UBPA_USREFL_NAME_ARG(0)},
			}
		},
		Field{"GetSingleton",
            static_cast<Ubpa::UECS::CmptPtr(Ubpa::UECS::EntityMngr::*)(Ubpa::UECS::CmptType)const>(&Ubpa::UECS::EntityMngr::GetSingleton),
			AttrList {
				Attr{UBPA_USREFL_NAME_ARG(0)},
			}
		},
        Field{"Accept", &Ubpa::UECS::EntityMngr::Accept,
            AttrList {
                Attr{UBPA_USREFL_NAME_ARG(0),
                    AttrList{
                        Attr{Name::name, "listener"},
                    }
                },
            }
        },
    };
};

