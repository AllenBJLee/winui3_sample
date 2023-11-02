// Copyright (c) Microsoft Corporation and Contributors.
// Licensed under the MIT License.

#pragma once

#include "MainWindow.g.h"

namespace winrt::GridStyleListView::implementation
{
    using Windows::Foundation::Collections::IObservableVector;

    struct MainWindow : MainWindowT<MainWindow>
    {
        MainWindow();

        int32_t MyProperty();
        void MyProperty(int32_t value);

        IObservableVector<Data> GetData();

    private:
        IObservableVector<Data> m_listData{};
    };
}

namespace winrt::GridStyleListView::factory_implementation
{
    struct MainWindow : MainWindowT<MainWindow, implementation::MainWindow>
    {
    };
}
