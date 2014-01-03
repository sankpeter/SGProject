//
//  UPViewController.h
//  SGProject
//
//  Created by huang on 12/31/13.
//  Copyright (c) 2013 SharpGrid. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "UPPayPluginDelegate.h"
///Users/huang/Desktop/SGProject/SGProject/Lib/UPPayPlugin
///Users/huang/Desktop/upmp_iphone/demo/UPPayDemo/UPPayDemo/UPPayPlugin

@interface UPViewController : UIViewController<UPPayPluginDelegate>
{
    UIAlertView* mAlert;
    NSMutableData* mData;
}

- (void)showAlertWait;
- (void)showAlertMessage:(NSString*)msg;
- (void)hideAlert;

- (NSString*)currentUID;

@end