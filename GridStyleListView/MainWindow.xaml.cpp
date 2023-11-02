// Copyright (c) Microsoft Corporation and Contributors.
// Licensed under the MIT License.

#include "pch.h"
#include "MainWindow.xaml.h"
#if __has_include("MainWindow.g.cpp")
#include "MainWindow.g.cpp"
#endif

using namespace winrt;
using namespace Microsoft::UI::Xaml;

// To learn more about WinUI, the WinUI project structure,
// and more about our project templates, see: http://aka.ms/winui-project-info.

namespace winrt::GridStyleListView::implementation
{
    MainWindow::MainWindow() : m_listData(
        single_threaded_observable_vector<Data>({ {L"Name1", L"Service1"}, {L"Name2", L"Service2"}})
    )
    {
        InitializeComponent();

        Data added{ L"Add3", L"Service3" };
        m_listData.Append(added);
    }

    int32_t MainWindow::MyProperty()
    {
        throw hresult_not_implemented();
    }

    void MainWindow::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }

    IObservableVector<Data> MainWindow::GetData() {
        return m_listData;
    }
}
