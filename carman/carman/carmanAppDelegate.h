//
//  carmanAppDelegate.h
//  carman
//
//  Created by Siobhan Foster on 7/25/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "car.h"

@interface carmanAppDelegate : NSObject <UIApplicationDelegate>
{ UIWindow *window;}

@property (nonatomic, retain) IBOutlet UIWindow *window;

- (void) addCarToList: (id) anyCar;

@end
