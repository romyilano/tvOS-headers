//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DAEAS/ASItem.h>

@class NSArray, NSNumber;

@interface ASItemOperationsResponse : ASItem
{
    NSNumber *_status;
    NSArray *_fetchResponses;
}

+ (id)asParseRules;
+ (_Bool)notifyOfUnknownTokens;
+ (_Bool)frontingBasicTypes;
+ (_Bool)parsingWithSubItems;
+ (_Bool)parsingLeafNode;
+ (_Bool)acceptsTopLevelLeaves;
- (void).cxx_destruct;
- (id)status;
- (void)setStatus:(id)arg1;
- (id)description;
- (void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 account:(id)arg6;
- (void)setFetchResponses:(id)arg1;
- (id)fetchResponses;

@end
