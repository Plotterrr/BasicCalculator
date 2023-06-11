package(default_visibility = ["//visibility:public"])
load("@rules_cc//cc:defs.bzl","cc_library" ,"cc_binary", "cc_test")

cc_library(
    name = "Calculation",
    srcs = ["Calculation.cc"],
    hdrs = ["Calculation.h"],
)

cc_binary(
    name = "main",
    srcs = ["main.cc"],
    deps=[":Calculation"],
)

cc_test(
 name = "test",
 srcs = ["test.cc"],
 deps = ["Calculation",
     "@com_google_googletest//:gtest_main"],
)


