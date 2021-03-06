//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DAEAS/ASItem.h>

@class NSString;

@interface ASPolicy : ASItem
{
    NSString *_type;
    NSString *_key;
    NSString *_status;
}

+ (id)asParseRules;
+ (_Bool)notifyOfUnknownTokens;
+ (_Bool)frontingBasicTypes;
+ (_Bool)parsingWithSubItems;
+ (_Bool)parsingLeafNode;
+ (_Bool)acceptsTopLevelLeaves;
- (void).cxx_destruct;
- (id)perDomainDictsForPolicy;
- (id)description;
- (void)_setStatus:(id)arg1;
- (void)_setKey:(id)arg1;
- (void)_setType:(id)arg1;
- (int)status;
- (id)key;
- (id)type;

@end

