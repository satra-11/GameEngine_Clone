#pragma once


#ifdef HZ_PLATFORM_WINDOWS

//extern�ŕʂ̏ꏊ�Œ�`�BCreateApplication�̓N���C�A���g�Ŏ��s�����
extern Hazel::Application* Hazel::CreateApplication();

int main(int argc, char** arfv)
{
	Hazel::Log::Init();
	int a = 5;
	HZ_CORE_TRACE("hello var={0}", a);


	auto app = Hazel::CreateApplication();
	app->Run();
	delete app;
}

#endif