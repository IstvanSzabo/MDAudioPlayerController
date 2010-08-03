//
//  RootViewController.h
//  MDAudioPlayerSample
//
//  Created by Matt Donnelly on 03/08/2010.
//  Copyright 2010 Matt Donnelly. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RootViewController : UITableViewController 
{
	NSMutableArray *fileArray;
}

@property (nonatomic, retain) NSMutableArray *fileArray;

@end
