//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreDAV/CoreDAVItem.h>

@class NSMutableSet;

@interface CoreDAVCalendarServerPushTransportsItem : CoreDAVItem
{
    NSMutableSet *_transports;
}

+ (id)copyParseRules;
@property(retain, nonatomic) NSMutableSet *transports; // @synthesize transports=_transports;
- (void)addTransport:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)init;

@end
