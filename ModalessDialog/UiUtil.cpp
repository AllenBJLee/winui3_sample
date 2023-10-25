#include "pch.h"

#include "UiUTil.h"

namespace UiUtil {
    void CenterWindow(AppWindow& appWindow) {
        int nScreenWidth = GetSystemMetrics(SM_CXSCREEN);
        int nScreenHeight = GetSystemMetrics(SM_CYSCREEN);

        auto size = appWindow.Size();

        int nLeft = nScreenWidth / 2 - size.Width / 2;
        int nTop = nScreenHeight / 2 - size.Height / 2;
        appWindow.Move(PointInt32{ nLeft, nTop });
    }

    void Resize(AppWindow& appWindow, const SizeInt32& size, bool bMaximizable /*= false*/, bool bMinimizable /*= false*/, bool bResizable /*= false*/) {
        auto presenter = appWindow.Presenter();
        auto overlappedPresenter = presenter.as<OverlappedPresenter>();

        appWindow.Resize(size);

        overlappedPresenter.IsMaximizable(bMaximizable);
        overlappedPresenter.IsMinimizable(bMinimizable);
        overlappedPresenter.IsResizable(bResizable);
    }
};