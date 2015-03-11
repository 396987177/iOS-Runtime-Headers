/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString;

@interface SAWatchData : AceObject <SAAceSerializable> {
}

@property bool configuredForLeftWrist;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(copy) NSString * interfaceOrientation;
@property(readonly) Class superclass;
@property bool wristDetected;

+ (id)watchData;
+ (id)watchDataWithDictionary:(id)arg1 context:(id)arg2;

- (bool)configuredForLeftWrist;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)interfaceOrientation;
- (void)setConfiguredForLeftWrist:(bool)arg1;
- (void)setInterfaceOrientation:(id)arg1;
- (void)setWristDetected:(bool)arg1;
- (bool)wristDetected;

@end