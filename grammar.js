module.exports = grammar({
    name: 'gherkin',

    rules: {
        source_file: $ => seq(
            $.feature_definition,
            repeat1(
                $.scenario_definition
            )
        ),

        feature_definition: $ => seq(
            'Feature:',
            ' ',
            $.identifier
        ),

        scenario_definition: $ => seq(
            'Scenario:',
            ' ',
            $.identifier,
            repeat1(
                $.step_definition,
            ),
        ),

        step_definition: $ => seq(
            choice(
                "Given",
                "When",
                "Then",
                "And",
                "But",
                "*",
            ),
            ' ',
            $.identifier,
        ),

        identifier: $ => /([A-z]| )+/
    }
})