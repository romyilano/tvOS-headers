//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface HLPHelpLocale : NSObject
{
    NSString *_path;
    NSArray *_isoCodes;
}

@property(copy, nonatomic) NSArray *isoCodes; // @synthesize isoCodes=_isoCodes;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)initWithDictionary:(id)arg1;

@end

