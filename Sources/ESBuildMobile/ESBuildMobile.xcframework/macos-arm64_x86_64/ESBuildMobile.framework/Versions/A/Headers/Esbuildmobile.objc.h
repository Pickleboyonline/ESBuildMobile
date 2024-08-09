// Objective-C API for talking to github.com/Pickleboyonline/ESBuildMobile Go package.
//   gobind -lang=objc github.com/Pickleboyonline/ESBuildMobile
//
// File is generated by gobind. Do not edit.

#ifndef __Esbuildmobile_H__
#define __Esbuildmobile_H__

@import Foundation;
#include "ref.h"
#include "Universe.objc.h"


@class EsbuildmobileTransformOptions;

@interface EsbuildmobileTransformOptions : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (nonnull instancetype)init;
/**
 * Change `React.createElement` to custom name
 */
@property (nonatomic) NSString* _Nonnull jsxFactory;
/**
 * Change `React.Fragment` to custom name
 */
@property (nonatomic) NSString* _Nonnull jsxFragment;
@end

/**
 * Returns code and error
`TransformOptions` is optional
 */
FOUNDATION_EXPORT NSString* _Nonnull EsbuildmobileTransformJSX(NSString* _Nullable input, EsbuildmobileTransformOptions* _Nullable options, NSError* _Nullable* _Nullable error);

#endif
