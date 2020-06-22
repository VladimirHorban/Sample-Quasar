#include "SampleQuasar.h"

int WINAPI main(HINSTANCE currentInstance, HINSTANCE previousInstance, PSTR cmdLine, INT cmdCount)
{
	CoreMinimal core("SampleQuasar", 800, 600, currentInstance, "E:/VSProjects/SampleQuasar/Assets/Shaders/vert.spv", "E:/VSProjects/SampleQuasar/Assets/Shaders/frag.spv");
	core.run();
	
	return 0;
}
