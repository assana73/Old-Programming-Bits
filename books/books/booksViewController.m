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
	NSString *bookTitle= @"Brave new world";
	NSString *bookTitle2=bookTitle;
	bookTitle2=@"Catch-22";
	//NSLog(@"%p - %@",bookTitle,bookTitle);
	//NSLog(@"%p - %@",bookTitle2,bookTitle2);
	
	NSString *bookAuthor = @"Aldous Huxley";
	int datePublished=1932;
	
	NSString *book = [NSString stringWithFormat:@"%@ by %@, published: %i", bookTitle, bookAuthor, datePublished];
	
	//NSLog(@"%@",book);
	
	NSMutableString *bookMutable=[NSMutableString stringWithString:bookTitle];
	
	NSLog(@"%p -%@", bookMutable,bookMutable);
	
	[bookMutable appendFormat:@" %@",bookAuthor];
	NSLog(@"%p - %@",bookMutable,bookMutable);
	
	[bookMutable appendFormat:@" %i",datePublished];
	NSLog(@"%p - %@",bookMutable,bookMutable);
	
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
