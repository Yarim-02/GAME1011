#include "NonGamingStudent.h"

StreamingPlatform NonGamingStudent::getPlatform()
{
    return m_platform;
}

void NonGamingStudent::setPlatform(int platform)
{
    m_platform = static_cast<StreamingPlatform>(platform);
}
