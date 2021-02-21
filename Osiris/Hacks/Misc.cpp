#include <mutex>
#include <numeric>
#include <sstream>

#include "../imgui/imgui.h"
#define IMGUI_DEFINE_MATH_OPERATORS
#include "../imgui/imgui_internal.h"

#include "../Config.h"
#include "../Interfaces.h"
#include "../Memory.h"

#include "EnginePrediction.h"
#include "Misc.h"

#include "../SDK/Client.h"
#include "../SDK/ConVar.h"
#include "../SDK/Entity.h"
#include "../SDK/GameEvent.h"
#include "../SDK/GlobalVars.h"
#include "../SDK/LocalPlayer.h"
#include "../SDK/Surface.h"
#include "../SDK/UserCmd.h"

#include "../GUI.h"
#include "../GameData.h"

#include "../imguiCustom.h"

void Misc::updateInput() noexcept
{

}
