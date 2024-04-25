#pragma once

#include "UEdefinitions.h"

namespace FeatureFlags {
	namespace SDK {
		// bitmask
		static constexpr int FUNCTION_BODIES = 1 << 0;
		static constexpr int FORWARD_DECLARATIONS = 1 << 1;
		static constexpr int ADD_INCLUDES = 1 << 2;
		static constexpr int STRUCTS_BEFORE_CLASSES = 1 << 3;
		static constexpr int STATIC_ASSERTS_OBJECT_SIZE = 1 << 4;
		static constexpr int STATIC_ASSERTS_MEMBERS = 1 << 5;

#if WRITE_STATIC_ASSERT_TESTS
		static constexpr int STABLE = STATIC_ASSERTS_OBJECT_SIZE | STATIC_ASSERTS_MEMBERS;
#else
		static constexpr int STABLE = 0;
#endif
		static constexpr int EXPERIMENTAL_INTERNAL = STABLE | FUNCTION_BODIES | FORWARD_DECLARATIONS | ADD_INCLUDES | STRUCTS_BEFORE_CLASSES;
	}
}