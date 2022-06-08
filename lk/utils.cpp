#include "utils.h"


void U::setReset(std::set<short>* vec, size_t size)
{
	vec->clear();
	vec->erase(vec->begin(), vec->end());
}
bool U::ButtonCentered(const char* label)
{
	ImGuiStyle& style = ImGui::GetStyle();

	float size = ImGui::CalcTextSize(label).x + style.FramePadding.x * 2.0f;
	float avail = ImGui::GetContentRegionAvail().x;

	float off = (avail - size) * 0.5f;
	if (off > 0.0f)
		ImGui::SetCursorPosX(ImGui::GetCursorPosX() + off);

	return ImGui::Button(label);
}