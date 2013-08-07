/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSString, NSData, NSMutableArray, GEORPUserCredentials;

@interface GEORPProblemCollectionRequest : PBRequest <NSCopying> {
    NSString *_countryCode;
    NSData *_devicePushToken;
    NSString *_hwMachine;
    NSString *_inputLanguage;
    NSString *_osRelease;
    NSMutableArray *_requestElements;
    GEORPUserCredentials *_userCredentials;
}

@property(retain) NSMutableArray * requestElements;
@property(readonly) BOOL hasHwMachine;
@property(retain) NSString * hwMachine;
@property(readonly) BOOL hasOsRelease;
@property(retain) NSString * osRelease;
@property(readonly) BOOL hasCountryCode;
@property(retain) NSString * countryCode;
@property(readonly) BOOL hasInputLanguage;
@property(retain) NSString * inputLanguage;
@property(readonly) BOOL hasUserCredentials;
@property(retain) GEORPUserCredentials * userCredentials;
@property(readonly) BOOL hasDevicePushToken;
@property(retain) NSData * devicePushToken;


- (id)devicePushToken;
- (BOOL)hasDevicePushToken;
- (id)osRelease;
- (BOOL)hasOsRelease;
- (void)setDevicePushToken:(id)arg1;
- (void)setOsRelease:(id)arg1;
- (id)requestElementAtIndex:(unsigned int)arg1;
- (void)addRequestElement:(id)arg1;
- (id)userCredentials;
- (BOOL)hasUserCredentials;
- (void)setUserCredentials:(id)arg1;
- (id)hwMachine;
- (BOOL)hasHwMachine;
- (void)setHwMachine:(id)arg1;
- (id)inputLanguage;
- (BOOL)hasInputLanguage;
- (void)setInputLanguage:(id)arg1;
- (BOOL)hasCountryCode;
- (id)requestElements;
- (void)clearRequestElements;
- (unsigned int)requestElementsCount;
- (void)setRequestElements:(id)arg1;
- (void)copyTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (Class)responseClass;
- (void)writeTo:(id)arg1;
- (unsigned int)requestTypeCode;
- (id)countryCode;
- (void)setCountryCode:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end