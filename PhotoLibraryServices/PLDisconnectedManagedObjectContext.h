//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoLibraryServices/PLManagedObjectContext.h>

@interface PLDisconnectedManagedObjectContext : PLManagedObjectContext
{
}

+ (_Bool)canMergeRemoteChanges;
+ (_Bool)useModelMigratorToCreateDatabase;
- (void)disconnectFromChangeHub;
- (void)connectToChangeHub;

@end

