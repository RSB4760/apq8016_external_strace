/* Generated by ./xlat/gen.sh from ./xlat/v4l2_format_description_flags.in; do not edit. */

static const struct xlat v4l2_format_description_flags[] = {
#if defined(V4L2_FMT_FLAG_COMPRESSED) || (defined(HAVE_DECL_V4L2_FMT_FLAG_COMPRESSED) && HAVE_DECL_V4L2_FMT_FLAG_COMPRESSED)
	XLAT(V4L2_FMT_FLAG_COMPRESSED),
#endif
#if defined(V4L2_FMT_FLAG_EMULATED) || (defined(HAVE_DECL_V4L2_FMT_FLAG_EMULATED) && HAVE_DECL_V4L2_FMT_FLAG_EMULATED)
	XLAT(V4L2_FMT_FLAG_EMULATED),
#endif
	XLAT_END
};