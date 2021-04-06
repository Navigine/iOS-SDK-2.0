#import <Foundation/Foundation.h>


@protocol NCLocationEditListener

- (void)onLocationUploaded;

- (void)onUploadProgress:(int32_t)received
                   total:(int32_t)total;

- (void)onLocationEditError:(nullable NSError *)error;

@end
