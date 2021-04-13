#pragma once
#include <iostream>
#include <string>



class Enemy
{
private:
	std::string m_filePath;

public:
	Enemy(std::string file);
	//~Enemy();

	std::string GetFilePath();
	void SetFilePath(std::string filepath);


};