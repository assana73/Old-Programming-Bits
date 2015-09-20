//
//  carmanAppDelegate.m
//  carman
//
//  Created by Siobhan Foster on 7/25/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import "carmanAppDelegate.h"
#import "car.h"
#import "sedan.h"

@implementation carmanAppDelegate

@synthesize window = _window;

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions
{
	// Override point for customization after application launch.
	[self.window makeKeyAndVisible];
	
	car *acar= [[car alloc] init];
	sedan *asedan= [[sedan alloc] init];
	
	[asedan park];
	[asedan drive];
	
	asedan.doors=2;
	int doors= asedan.doors;
	int wheels= [sedan wheels];

	if ([acar flies])
	{
	
	}
	[self addCarToList:acar];
	[self addCarToList:asedan];
	[self addCarToList:nil];

	NSString *string=[NSString stringWithString:nil];
	[string lowercaseString];
	
	
	
    return YES;
}

- (void) addCarToList: (id) anyCar
{car *somecar= (car *) anyCar;

 if (somecar)
	{[somecar park];
	 [somecar drive];
	}
}

- (void)applicationWillResignActive:(UIApplication *)application
{
	/*
	 Sent when the application is about to move from active to inactive state. This can occur for certain types of temporary interruptions (such as an incoming phone call or SMS message) or when the user quits the application and it begins the transition to the background state.
	 Use this method to pause ongoing tasks, disable timers, and throttle down OpenGL ES frame rates. Games should use this method to pause the game.
	 */
}

- (void)applicationDidEnterBackground:(UIApplication *)application
{
	/*
	 Use this method to release shared resources, save user data, invalidate timers, and store enough application state information to restore your application to its current state in case it is terminated later. 
	 If your application supports background execution, this method is called instead of applicationWillTerminate: when the user quits.
	 */
}

- (void)applicationWillEnterForeground:(UIApplication *)application
{
	/*
	 Called as part of the transition from the background to the inactive state; here you can undo many of the changes made on entering the background.
	 */
}

- (void)applicationDidBecomeActive:(UIApplication *)application
{
	/*
	 Restart any tasks that were paused (or not yet started) while the application was inactive. If the application was previously in the background, optionally refresh the user interface.
	 */
}

- (void)applicationWillTerminate:(UIApplication *)application
{
	/*
	 Called when the application is about to terminate.
	 Save data if appropriate.
	 See also applicationDidEnterBackground:.
	 */
}

- (void)dealloc
{
	[_window release];
    [super dealloc];
}

@end
