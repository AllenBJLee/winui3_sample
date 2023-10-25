#pragma once

using winrt::Microsoft::UI::Windowing::OverlappedPresenter;
using winrt::Microsoft::UI::Windowing::AppWindow;

using winrt::Windows::Graphics::SizeInt32;
using winrt::Windows::Graphics::PointInt32;

namespace UiUtil {
    void CenterWindow(AppWindow& appWindow);
    void Resize(AppWindow& appWindow, const SizeInt32& size, bool bMaximizable = false, bool bMinimizable = false, bool bResizable = false);
};
