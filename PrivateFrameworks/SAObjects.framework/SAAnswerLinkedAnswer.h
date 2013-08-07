/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSURL, NSString;

@interface SAAnswerLinkedAnswer : AceObject <SAAceSerializable> {
}

@property(copy) NSString * description;
@property(copy) NSURL * image;
@property(copy) NSURL * link;
@property(copy) NSString * name;

+ (id)linkedAnswerWithDictionary:(id)arg1 context:(id)arg2;
+ (id)linkedAnswer;

- (id)encodedClassName;
- (void)setDescription:(id)arg1;
- (void)setImage:(id)arg1;
- (id)image;
- (id)name;
- (id)description;
- (id)link;
- (void)setLink:(id)arg1;
- (id)groupIdentifier;
- (void)setName:(id)arg1;

@end