/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class CRRecentContact;

@interface MFRecentComposeRecipientGroup : MFComposeRecipientGroup  {
    CRRecentContact *_recentContact;
}

@property(readonly) CRRecentContact * recentContact;


- (id)initWithChildren:(id)arg1 displayString:(id)arg2 recentContact:(id)arg3;
- (id)recentContact;
- (id)unlocalizedLabel;
- (id)placeholderName;
- (id)label;
- (void)dealloc;

@end