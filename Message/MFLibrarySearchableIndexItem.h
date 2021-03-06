//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CSSearchableItem, MFMailMessage, NSData, NSString;

@interface MFLibrarySearchableIndexItem : NSObject
{
    _Bool _hasCompleteBodyData;
    MFMailMessage *_message;
    NSData *_bodyData;
}

+ (id)itemWithMessage:(id)arg1 bodyData:(id)arg2;
@property(nonatomic) _Bool hasCompleteBodyData; // @synthesize hasCompleteBodyData=_hasCompleteBodyData;
@property(retain, nonatomic) NSData *bodyData; // @synthesize bodyData=_bodyData;
@property(readonly, retain, nonatomic) MFMailMessage *message; // @synthesize message=_message;
@property(readonly, retain, nonatomic) CSSearchableItem *searchableItem;
- (_Bool)_isMessagePartOfExistingThreadWithHeaders:(id)arg1;
@property(readonly, copy, nonatomic) NSString *domainIdentifier;
@property(readonly, copy, nonatomic) NSString *identifier;
- (long long)compare:(id)arg1;
- (void)dealloc;
- (id)initWithMessage:(id)arg1 bodyData:(id)arg2;
- (id)init;

@end

