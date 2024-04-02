#pragma once

namespace FeatureFlags {
	namespace SDK {
		// bitmask
		const static int FUNCTION_BODIES = 1 << 0;
		const static int FORWARD_DECLARATIONS = 1 << 1;
		const static int ADD_INCLUDES = 1 << 2;
		const static int STRUCTS_BEFORE_CLASSES = 1 << 3;
		const static int STATIC_ASSERTS_OBJECT_SIZE = 1 << 4;
		const static int STATIC_ASSERTS_MEMBERS = 1 << 5;

		const static int STABLE = STATIC_ASSERTS_OBJECT_SIZE | STATIC_ASSERTS_MEMBERS;
		const static int EXPERIMENTAL_INTERNAL = STABLE | FUNCTION_BODIES | FORWARD_DECLARATIONS | ADD_INCLUDES | STRUCTS_BEFORE_CLASSES;
	}
}


#define FEATUURE_FLAG_ENABLE_ALPHA_AUTOMATED_SDK_DUMPING FALSE