//
//  MDAudioPlayerSampleAppDelegate.h
//  MDAudioPlayerSample
//
//  Created by Matt Donnelly on 03/08/2010.
//  Copyright 2010 Matt Donnelly. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MDAudioPlayerSampleAppDelegate : NSObject <UIApplicationDelegate> {
    
    UIWindow *window;
    UINavigationController *navigationController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet UINavigationController *navigationController;

@end

