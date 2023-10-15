#pragma once


#ifdef HZ_PLATFORM_WINDOWS

//externで別の場所で定義。CreateApplicationはクライアントで実行される
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