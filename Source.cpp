#include <wx/wx.h>


int main(int argc, char** argv)
{
	wxLocale m_locale; // Создать объект локали для wxWidgets
	m_locale.Init(wxLANGUAGE_RUSSIAN, wxLOCALE_DONT_LOAD_DEFAULT); // Установить локаль для wxWidgets

#ifdef __WXMSW__ // Определение для Windows
	SetConsoleCP(1251); // Установить кодовую страницу ввода для Windows
	SetConsoleOutputCP(1251); // Установить кодовую страницу вывода для Windows
#elif __WXGTK__ // Определение для Linux
	wxPuts(wxT("Замечательно! Das ist großartig! Wonderful! 精彩的！ رائع!")); // Вывести строку
#endif

	std::wstring input; // Создать строковую переменную
	wxPuts(wxT("Как вас зовут?")); // Вывести строку
	std::wcin >> input; // Считать строку
	wxString result(input); // Создать строку
	wxPuts(L"Привет," + result + "!"); // Вывести строку
}
