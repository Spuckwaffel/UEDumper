#pragma once

namespace FeatureFlags {
	namespace SDK {
		// bitmask
		const static int FUNCTION_BODIES = 1 << 0;
		const static int FORWARD_DECLARATIONS = 1 << 1;
		const static int ADD_INCLUDES = 1 << 2;
		const static int STRUCTS_BEFORE_CLASSES = 1 << 3;

		const static int STABLE = 0;
		const static int EXPERIMENTAL_INTERNAL = FUNCTION_BODIES | FORWARD_DECLARATIONS | ADD_INCLUDES | STRUCTS_BEFORE_CLASSES;
	}
}