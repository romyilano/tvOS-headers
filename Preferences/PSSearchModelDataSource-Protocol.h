//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Preferences/NSObject-Protocol.h>

@class NSArray, PSSearchModel;

@protocol PSSearchModelDataSource <NSObject>
- (NSArray *)rootSpecifiersForSearchModel:(PSSearchModel *)arg1;

@optional
- (Class)rootSearchControllerClassForSearchModel:(PSSearchModel *)arg1;
@end

