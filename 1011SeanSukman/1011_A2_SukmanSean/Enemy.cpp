#include "Enemy.h"

Enemy::Enemy(std::string file)
{
	SetFilePath(file);
}

std::string Enemy::GetFilePath()
{
	return static_cast<std::string>(m_filePath);
}

void Enemy::SetFilePath(std::string filePath)
{
	m_filePath = filePath;
}
