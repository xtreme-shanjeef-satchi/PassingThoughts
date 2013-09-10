//
//  PXAppDelegate.h
//  PassingThoughts
//
//  Created by DX050-XL on 2013-09-10.
//  Copyright (c) 2013 Xtreme Labs. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PXAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
