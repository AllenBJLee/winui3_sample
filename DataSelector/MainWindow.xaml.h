#pragma once

#include "MainWindow.g.h"
#include "MyTemplateSelector.h"

namespace winrt::DataSelector::implementation
{
    struct MainWindow : MainWindowT<MainWindow>
    {
        MainWindow();

        int32_t MyProperty();
        void MyProperty(int32_t value);

        Windows::Foundation::Collections::IObservableVector<int32_t> NumbersList();

    private :
        Windows::Foundation::Collections::IObservableVector<int32_t> m_numberList = single_threaded_observable_vector<int32_t>();
    };
}

namespace winrt::DataSelector::factory_implementation
{
    struct MainWindow : MainWindowT<MainWindow, implementation::MainWindow>
    {
    };
}
