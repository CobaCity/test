//
//  tpAppDelegate.h
//  iOSTestIPadApp
//
//  Created by Maxim Bukshovan on 8/1/13.
//  Copyright (c) 2013 Maxim Bukshovan. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface tpAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
