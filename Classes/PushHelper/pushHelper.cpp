//
//  pushHelper.cpp
//  pushDemo
//
//  Created by YTB on 14-4-10.
//
//

#include "pushHelper.h"

// singleton stuff
static pushHelper *s_SharedPushHelper = NULL;

pushHelper* pushHelper::sharedPushHelper(void)
{
    if (!s_SharedPushHelper)
    {
        s_SharedPushHelper = new pushHelper();
    }
    
    return s_SharedPushHelper;
}

pushHelper::pushHelper()
{}

pushHelper::~pushHelper()
{}

bool pushHelper::applicationDidFinishLaunchingWithNotification(const char* notificationJson)
{
    CCLOG("notificationJson=%s",notificationJson);
    return true;
}

void pushHelper::applicationDidRegisterForRemoteNotificationsWithDeviceToken(const char *deviceToken)
{
    CCLOG("deviceToken=%s",deviceToken);
}

void pushHelper::applicationdidFailToRegisterForRemoteNotificationsWithError(const char *error)
{
    CCLOG("FailToRegisterForRemoteNotificationsWithError=%s",error);
}

void pushHelper::applicationDidReceiveRemoteNotification(const char* notificationJson)
{}