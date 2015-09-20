//
//  ZoneClockAppDelegate.h
//  ZoneClock
//
//  Created by Siobhan on 7/15/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class ZoneClockViewController;

@interface ZoneClockAppDelegate : NSObject <UIApplicationDelegate> {

}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet ZoneClockViewController *viewController;

@end
