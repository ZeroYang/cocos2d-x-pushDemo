//
//  PushProtocol.h
//  pushDemo
//
//  Created by YTB on 14-4-9.
//
//

#ifndef __pushDemo__PushProtocol__
#define __pushDemo__PushProtocol__

class  PushProtocol
{
public:
    
    virtual ~PushProtocol() {}
    
    /**
     @brief  The function be called when the application launching receive remote notification
     @param  notificationJson the pointer of the notification json string
     */
    virtual bool applicationDidFinishLaunchingWithNotification(const char* notificationJson) = 0;

    /**
     @brief  The function be called when the application register remote notification success
     @param  deviceToken the pointer of the notification token string
     */
    virtual void applicationDidRegisterForRemoteNotificationsWithDeviceToken(const char *deviceToken) = 0;
    
    /**
     @brief  The function be called when the application register remote notification failed
     @param  error the pointer of the register remote notification failed string
     */
    virtual void applicationdidFailToRegisterForRemoteNotificationsWithError(const char *error) = 0;
    
    /**
     @brief  The function be called when the application running receive remote notification
     @param  notificationJson the pointer of the notification json string
     */
    virtual void applicationDidReceiveRemoteNotification(const char* notificationJson) = 0;
    
};

#endif /* defined(__pushDemo__PushProtocol__) */
