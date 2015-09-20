//
//  booksViewController.m
//  books
//
//  Created by Siobhan Foster on 8/2/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import "booksViewController.h"

@implementation booksViewController

- (void)didReceiveMemoryWarning
{
    // Releases the view if it doesn't have a superview.
    [super didReceiveMemoryWarning];
    
    // Release any cached data, images, etc that aren't in use.
}

#pragma mark - View lifecycle


// Implement viewDidLoad to do additional setup after loading the view, typically from a nib.

- (void)viewDidLoad
{
    [super viewDidLoad];
	
	NSArray *bookTitles = [NSArray arrayWithObjects:@"Brave New World",@"Call of the Wild", @"Catch-22", @"Atlas Shrugged", nil];
	NSLog(@"%@",bookTitles);
	
	[bookTitles count];
	NSString *string = [bookTitles objectAtIndex:3];
	
	NSLog(@"%@",string);
	
	int index = [bookTitles indexOfObject:@"Catch-22"];
	NSLog(@"Index of Catch-22 is %i",index);
	
	
	
}


- (void)viewDidUnload
{
    [super viewDidUnload];
    // Release any retained subviews of the main view.
    // e.g. self.myOutlet = nil;
}

- (BOOL)shouldAutorotateToInterfaceOrientation:(UIInterfaceOrientation)interfaceOrientation
{
    // Return YES for supported orientations
    return (interfaceOrientation == UIInterfaceOrientationPortrait);
}

@end
