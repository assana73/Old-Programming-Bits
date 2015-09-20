//
//  ZoneClockViewController.m
//  ZoneClock
//
//  Created by Siobhan on 7/15/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import "ZoneClockViewController.h"

@implementation ZoneClockViewController
@synthesize estTextFeild;
@synthesize cstLabel;
@synthesize pstLabel;

- (void)dealloc
{
    [estTextFeild release];
    [cstLabel release];
	[pstLabel release];
    [super dealloc];
}

- (void)didReceiveMemoryWarning
{
    // Releases the view if it doesn't have a superview.
    [super didReceiveMemoryWarning];
    
    // Release any cached data, images, etc that aren't in use.
}

#pragma mark - View lifecycle

/*
// Implement viewDidLoad to do additional setup after loading the view, typically from a nib.
- (void)viewDidLoad
{
    [super viewDidLoad];
}
*/

- (void)viewDidUnload
{
    [self setEstTextFeild:nil];
    [self setCstLabel:nil];
	[self setPstLabel:nil];
    [super viewDidUnload];
    // Release any retained subviews of the main view.
    // e.g. self.myOutlet = nil;
}

- (BOOL)shouldAutorotateToInterfaceOrientation:(UIInterfaceOrientation)interfaceOrientation
{
    // Return YES for supported orientations
    return (interfaceOrientation == UIInterfaceOrientationPortrait);
}

- (IBAction)showTime {
	NSDateFormatter *nsdf = [[NSDateFormatter alloc] init];
	[nsdf setDateFormat:@"hh:mm a"];
	[nsdf setDateStyle:NSDateFormatterNoStyle];
	[nsdf setTimeStyle:NSDateFormatterShortStyle];
	NSDate *estDate = [nsdf dateFromString:self.estTextFeild.text];
	
	[nsdf setDateFormat:@"hh:mm a zzz"];
	[nsdf setTimeZone:[NSTimeZone timeZoneWithAbbreviation:@"CST"]];
	self.cstLabel.text = [nsdf stringFromDate:estDate];
	
	[nsdf setTimeZone:[NSTimeZone timeZoneWithAbbreviation:@"PST"]];
	self.pstLabel.text = [nsdf stringFromDate:estDate];
	[nsdf release];
	
}
@end
