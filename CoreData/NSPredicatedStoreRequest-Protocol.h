//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSObject-Protocol.h>

@class NSEntityDescription, NSPredicate;

@protocol NSPredicatedStoreRequest <NSObject>
- (_Bool)includesSubentities;
- (NSPredicate *)predicate;
- (NSEntityDescription *)entity;
@end

