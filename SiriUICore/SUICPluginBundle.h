//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface SUICPluginBundle : NSObject
{
    Class _factoryClass;
    id _factoryInstance;
    NSMutableDictionary *_classIdentifiers;
}

@property(retain, nonatomic) NSMutableDictionary *classIdentifiers; // @synthesize classIdentifiers=_classIdentifiers;
@property(retain, nonatomic) id factoryInstance; // @synthesize factoryInstance=_factoryInstance;
@property(retain, nonatomic) Class factoryClass; // @synthesize factoryClass=_factoryClass;
- (void).cxx_destruct;
- (_Bool)supportsClassIdentifier:(id)arg1 forDomainKey:(id)arg2 groupIdentifier:(id)arg3;
- (void)registerClassIdentifier:(id)arg1 forDomain:(id)arg2 inGroup:(id)arg3;
- (id)init;

@end

