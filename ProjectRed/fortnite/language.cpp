#include "fortnite/language.h"

namespace ProjectRed
{
	bool Languages::InitLanguages()
	{
		if (Language::English == true)
		{
			printf("Language Set To English(US)\n");
			return true;
		}

		if (Language::Spanish == true)
		{
			printf("Idioma configurado en español\n");
			return true;
		}

		if (Language::French == true)
		{
			printf("Langue réglée sur le français\n");
			return true;
		}

		if (Language::Portuguese == true)
		{
			printf("Idioma definido como português\n");
			return true;
		}

		if (Language::German == true)
		{
			printf("Sprache auf Deutsch eingestellt\n");
			return true;
		}

		if (Language::Dutch == true)
		{
			printf("Taal ingesteld op Nederlands\n");
			return true;
		}

		if (Language::Italian == true)
		{
			printf("Lingua impostata su italiano\n");
			return true;
		}

		if (Language::Danish == true)
		{
			printf("Sproget er indstillet til dansk\n");
			return true;
		}

		if (Language::Russian == true)
		{
			printf("Язык установлен на русский\n");
			return true;
		}

		if (Language::Serbian == true)
		{
			printf("Језик је подешен на српски\n");
			return true;
		}

		if (Language::Bosnian == true)
		{
			printf("Jezik postavljen na bosanski\n");
			return true;
		}

		if (Language::Finnish == true)
		{
			printf("Kieli asetettu suomeksi\n");
			return true;
		}

		if (Language::Swedish == true)
		{
			printf("Språket är inställt på svenska\n");
			return true;
		}

		if (Language::Norwegian == true)
		{
			printf("Språk satt til norsk\n");
			return true;
		}

		if (Language::Georgian == true)
		{
			printf("ენა დაყენებულია ქართულად\n");
			return true;
		}

		if (Language::Thai == true)
		{
			printf("ตั้งค่าภาษาเป็นภาษาไทย\n");
			return true;
		}

		if (Language::Taiwanese == true)
		{
			printf("語言設定為台灣繁體中文\n");
			return true;
		}

		if (Language::Chinese == true)
		{
			printf("语言已设置为中文\n");
			return true;
		}

		if (Language::Japanese == true)
		{
			printf("言語を日本語に設定しました。\n");
			return true;
		}

		if (Language::English_UK == true)
		{
			printf("Language Set To English(UK/AU/NZ)\n");
			return true;
		}

		if (Language::Polish == true)
		{
			printf("Język ustawiony na polski\n");
			return true;
		}

		if (Language::Latvian == true)
		{
			printf("Valoda iestatīta uz latviešu valodu\n");
			return true;
		}

		if (Language::Turkish == true)
		{
			printf("Dil Türkçe olarak ayarlandı\n");
			return true;
		}

		if (Language::Arabic == true)
		{
			printf("تم ضبط اللغة على العربية\n");
			return true;
		}

		if (Language::Portuguese_BR == true)
		{
			printf("Idioma definido como português (brasileiro)\n");
			return true;
		}

		if (Language::Singaporian == true)
		{
			printf("மொழி சிங்கப்பூர் மொழிக்கு அமைக்கப்பட்டது\n");
			return true;
		}

		if (Language::Vietnamese == true)
		{
			printf("Ngôn ngữ đã được đặt thành tiếng Việt.\n");
			return true;
		}

		return 0;
	}
}