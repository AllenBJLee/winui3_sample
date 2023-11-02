========================================================================
    GridStyleListView Project Overview
========================================================================

This project demonstrates how to get started writing WinUI3 apps directly
with standard C++, using the Windows App SDK and C++/WinRT packages and
XAML compiler support to generate implementation headers from interface
(IDL) files. These headers can then be used to implement the local
Windows Runtime classes referenced in the app's XAML pages.

Steps:
1. Create an interface (IDL) file to define any local Windows Runtime
    classes referenced in the app's XAML pages.
2. Build the project once to generate implementation templates under
    the "Generated Files" folder, as well as skeleton class definitions
    under "Generated Files\sources".
3. Use the skeleton class definitions for reference to implement your
    Windows Runtime classes.

========================================================================
Learn more about Windows App SDK here:
https://docs.microsoft.com/windows/apps/windows-app-sdk/
Learn more about WinUI3 here:
https://docs.microsoft.com/windows/apps/winui/winui3/
Learn more about C++/WinRT here:
http://aka.ms/cppwinrt/
========================================================================


# DataBind 를 위한 .idl, .h .cpp 파일을 추가
 - Data.idl
 - Data.h
 - Data.cpp

Data.idl 은 platform xaml 에서 사용할 수 있는 MIDL 이며 ListView 와 소스코드의 바인드를 위한 중간 단계 역할을 합니다.
Data.idl 은 데이터 변화를 알려줄 수 있는 Microsoft.UI.Xaml.Data.INotifyPropertyChanged 을 상속받아야 합니다.
세 파일을 참고해 Data 형태를 파악하고 구현합니다.

# ListView 에서 사용할 데이터를 획득할 수 있는 멤버 변수를 추가
 - MainWindow.xaml.h 의 멤버변수로 `IObservableVector<Data> m_listData{};` 를 선언하고
 - xaml 에서 데이터 바인딩 시 사용할 수 있는 method `IObservableVector<Data> GetData();` 를 추가
 - xaml 에서 참조할 수 있도록 MainWindow.idl 에 getter `Windows.Foundation.Collections.IObservableVector<Data> GetData{ get; };` 추가
 - MainWindow.idl 에서 Data 를 참조하기 위해 Data.idl 을 추가. `import "Data.idl";`
 - struct MainWindow 에 추가된 m_listData 를 초기화하는 코드와 GetData() 의 구현을 MainWindow.xaml.cpp 를 참조해 구현합니다.
 
# ListView 를 GridView 형태로 표현하기 위한 코드는 MainWindow.xaml 을 참조합니다.
