#include "framework.h"
#include "keychecker.h"

#include "helper.h"

using namespace std;
using namespace Ambiesoft::stdosd;

std::wstring GetIniPath()
{
	return stdCombinePath(stdGetParentDirectory(stdGetModuleFileName()),
		stdGetFileNameWithoutExtension(stdGetModuleFileName()) + L".ini");
}
