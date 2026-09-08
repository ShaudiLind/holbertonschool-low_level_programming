<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8" />
  <meta name="viewport" content="width=device-width, initial-scale=1.0" />
  <title>0-whatsmyname.c</title>
  <link rel="preconnect" href="https://fonts.googleapis.com">
  <link rel="preconnect" href="https://fonts.gstatic.com" crossorigin>
  <link href="https://fonts.googleapis.com/css2?family=Space+Grotesk:wght@400;500;700&family=IBM+Plex+Mono:wght@400;500&display=swap" rel="stylesheet">
  <style>
    :root {
      --bg: #f5f1e8;
      --paper: rgba(255, 252, 246, 0.72);
      --ink: #1d1a16;
      --muted: #62584d;
      --accent: #b14d2b;
      --accent-2: #2f6b5f;
      --line: rgba(29, 26, 22, 0.12);
      --shadow: 0 20px 60px rgba(56, 38, 22, 0.12);
      --radius: 24px;
    }

    * { box-sizing: border-box; }

    html, body {
      margin: 0;
      padding: 0;
      background:
        radial-gradient(circle at top right, rgba(177, 77, 43, 0.12), transparent 28%),
        radial-gradient(circle at bottom left, rgba(47, 107, 95, 0.12), transparent 26%),
        linear-gradient(180deg, #f8f5ef 0%, var(--bg) 100%);
      color: var(--ink);
      font-family: "Space Grotesk", sans-serif;
      min-height: 100%;
    }

    body {
      overflow-x: hidden;
    }

    .grain::before {
      content: "";
      position: fixed;
      inset: 0;
      pointer-events: none;
      opacity: 0.06;
      background-image:
        linear-gradient(rgba(0,0,0,0.04) 1px, transparent 1px),
        linear-gradient(90deg, rgba(0,0,0,0.04) 1px, transparent 1px);
      background-size: 4px 4px, 4px 4px;
      mix-blend-mode: multiply;
    }

    .wrap {
      width: min(1120px, calc(100% - 2rem));
      margin: 0 auto;
    }

    header {
      padding: 1rem 0 0;
    }

    nav {
      display: flex;
      align-items: center;
      justify-content: space-between;
      gap: 1rem;
      padding: 0.75rem 0;
    }

    .brand {
      display: flex;
      align-items: center;
      gap: 0.8rem;
      font-weight: 700;
      letter-spacing: 0.04em;
      text-transform: uppercase;
      font-size: 0.82rem;
    }

    .brand-mark {
      width: 40px;
      height: 40px;
      border-radius: 12px;
      background:
        linear-gradient(135deg, var(--accent), #d38a58);
      box-shadow: inset 0 1px 0 rgba(255,255,255,0.4), var(--shadow);
      position: relative;
    }

    .brand-mark::after {
      content: "C";
      position: absolute;
      inset: 0;
      display: grid;
      place-items: center;
      color: #fff8f2;
      font-family: "IBM Plex Mono", monospace;
      font-size: 1rem;
      font-weight: 500;
    }

    .nav-note {
      font-size: 0.92rem;
      color: var(--muted);
    }

    main {
      padding: 2rem 0 5rem;
    }

    .hero {
      display: grid;
      grid-template-columns: 1fr;
      gap: 1.5rem;
      align-items: start;
    }

    .eyebrow,
    .reveal {
      opacity: 0;
      transform: translateY(18px);
      animation: rise 0.8s ease forwards;
    }

    .eyebrow {
      display: inline-flex;
      align-items: center;
      gap: 0.6rem;
      color: var(--accent-2);
      letter-spacing: 0.12em;
      text-transform: uppercase;
      font-size: 0.75rem;
      font-weight: 700;
      animation-delay: 0.08s;
    }

    .eyebrow::before {
      content: "";
      width: 34px;
      height: 1px;
      background: currentColor;
      opacity: 0.7;
    }

    h1 {
      margin: 0;
      max-width: 10ch;
      font-size: clamp(3rem, 9vw, 7.2rem);
      line-height: 0.92;
      letter-spacing: -0.06em;
      font-weight: 700;
      animation-delay: 0.16s;
    }

    .lead {
      max-width: 62ch;
      color: var(--muted);
      font-size: clamp(1rem, 2vw, 1.16rem);
      line-height: 1.7;
      animation-delay: 0.24s;
    }

    .layout {
      margin-top: 2.2rem;
      display: grid;
      grid-template-columns: 1fr;
      gap: 1.2rem;
    }

    .panel {
      position: relative;
      border: 1px solid var(--line);
      background: var(--paper);
      backdrop-filter: blur(14px);
      -webkit-backdrop-filter: blur(14px);
      border-radius: var(--radius);
      box-shadow: var(--shadow);
      overflow: hidden;
    }

    .panel::before {
      content: "";
      position: absolute;
      inset: 0;
      background:
        linear-gradient(135deg, rgba(255,255,255,0.38), transparent 42%);
      pointer-events: none;
    }

    .code-panel {
      padding: 1rem;
      animation-delay: 0.34s;
    }

    .code-top {
      display: flex;
      align-items: center;
      justify-content: space-between;
      gap: 1rem;
      padding: 0.3rem 0 1rem;
      border-bottom: 1px solid var(--line);
      margin-bottom: 1rem;
    }

    .dots {
      display: flex;
      gap: 0.42rem;
    }

    .dot {
      width: 10px;
      height: 10px;
      border-radius: 999px;
      background: #d6c9b7;
    }

    .dot:nth-child(1) { background: #d37d5d; }
    .dot:nth-child(2) { background: #d8b354; }
    .dot:nth-child(3) { background: #6fa492; }

    .file-name {
      font-family: "IBM Plex Mono", monospace;
      font-size: 0.84rem;
      color: var(--muted);
    }

    pre {
      margin: 0;
      overflow: auto;
      font-family: "IBM Plex Mono", monospace;
      font-size: 0.95rem;
      line-height: 1.75;
      color: #201c18;
      white-space: pre-wrap;
      word-break: break-word;
    }

    .meta {
      display: grid;
      gap: 1rem;
      animation-delay: 0.44s;
    }

    .meta-block {
      padding: 1.3rem 1.2rem;
    }

    .meta-label {
      font-size: 0.74rem;
      text-transform: uppercase;
      letter-spacing: 0.14em;
      color: var(--accent-2);
      margin-bottom: 0.7rem;
      font-weight: 700;
    }

    .meta-block p,
    .meta-block li {
      margin: 0;
      color: var(--muted);
      line-height: 1.7;
    }

    .meta-block ul {
      padding-left: 1rem;
      margin: 0;
    }

    .copy-btn {
      appearance: none;
      border: 0;
      border-radius: 999px;
      padding: 0.9rem 1.15rem;
      font-family: "Space Grotesk", sans-serif;
      font-weight: 700;
      font-size: 0.95rem;
      background: linear-gradient(135deg, var(--ink), #3b342d);
      color: #fff8f2;
      cursor: pointer;
      transition: transform 180ms ease, box-shadow 180ms ease, background 180ms ease;
      box-shadow: 0 14px 24px rgba(29, 26, 22, 0.18);
    }

    .copy-btn:hover {
      transform: translateY(-2px) scale(1.02);
      background: linear-gradient(135deg, var(--accent), #8e3f24);
    }

    .copy-btn:active {
      transform: translateY(0) scale(0.99);
    }

    .status {
      margin-left: 0.75rem;
      font-size: 0.9rem;
      color: var(--accent-2);
      font-weight: 700;
    }

    .footer-note {
      margin-top: 1.6rem;
      font-size: 0.9rem;
      color: var(--muted);
      animation-delay: 0.54s;
    }

    .scroll-in {
      opacity: 0;
      transform: translateY(24px);
      transition: opacity 700ms ease, transform 700ms ease;
    }

    .scroll-in.in-view {
      opacity: 1;
      transform: translateY(0);
    }

    @keyframes rise {
      to {
        opacity: 1;
        transform: translateY(0);
      }
    }

    @media (min-width: 880px) {
      .hero {
        grid-template-columns: 1.1fr 0.9fr;
        gap: 1.5rem;
      }

      .layout {
        grid-template-columns: 1.2fr 0.8fr;
        align-items: start;
      }

      .meta {
        position: sticky;
        top: 1rem;
      }
    }
  </style>
</head>
<body class="grain">
  <div class="wrap">
    <header>
      <nav>
        <div class="brand">
          <span class="brand-mark" aria-hidden="true"></span>
          <span>argc_argv / task 0</span>
        </div>
        <div class="nav-note">Holberton C project helper</div>
      </nav>
    </header>

    <main>
      <section class="hero">
        <div>
          <div class="eyebrow">Print the program name</div>
          <h1 class="reveal">0-whatsmyname.c</h1>
          <p class="lead reveal">
            This task asks for a program that prints its own name exactly as it was invoked,
            followed by a new line. That means using <code>argv[0]</code> and keeping the path if one exists.
          </p>
        </div>
        <div class="panel meta-block reveal">
          <div class="meta-label">Task summary</div>
          <p>
            If the executable is renamed, the output changes automatically without recompiling,
            because the program reads its invocation name from the command line arguments.
          </p>
        </div>
      </section>

      <section class="layout">
        <article class="panel code-panel reveal">
          <div class="code-top">
            <div class="dots" aria-hidden="true">
              <span class="dot"></span>
              <span class="dot"></span>
              <span class="dot"></span>
            </div>
            <div class="file-name">argc_argv/0-whatsmyname.c</div>
          </div>

          <pre id="code">#include &lt;stdio.h&gt;

/**
 * main - prints the name of the program
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);

	return (0);
}</pre>
        </article>

        <aside class="meta scroll-in">
          <div class="panel meta-block">
            <div class="meta-label">Why this works</div>
            <ul>
              <li><code>argv[0]</code> contains the program name used to run the executable.</li>
              <li><code>(void)argc;</code> avoids an unused parameter warning.</li>
              <li><code>printf("%s\n", argv[0]);</code> prints the exact name with newline.</li>
            </ul>
          </div>

          <div class="panel meta-block">
            <div class="meta-label">Compile</div>
            <p><code>gcc -Wall -Werror -Wextra -pedantic -std=gnu89 0-whatsmyname.c -o mynameis</code></p>
          </div>

          <div class="panel meta-block">
            <div class="meta-label">Action</div>
            <button class="copy-btn" id="copyBtn" type="button">Copy C file</button>
            <span class="status" id="status" aria-live="polite"></span>
          </div>
        </aside>
      </section>

      <p class="footer-note reveal">
        Use this exact source for task 0 if your checker expects a standard Betty-style solution.
      </p>
    </main>
  </div>

  <script>
    const copyBtn = document.getElementById('copyBtn');
    const code = document.getElementById('code');
    const status = document.getElementById('status');

    copyBtn.addEventListener('click', async () => {
      const rawCode = `#include <stdio.h>

/**
 * main - prints the name of the program
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\\n", argv[0]);

	return (0);
}`;
      try {
        await navigator.clipboard.writeText(rawCode);
        status.textContent = 'Copied';
        setTimeout(() => status.textContent = '', 1600);
      } catch (e) {
        status.textContent = 'Copy failed';
      }
    });

    const observer = new IntersectionObserver((entries) => {
      entries.forEach((entry) => {
        if (entry.isIntersecting) {
          entry.target.classList.add('in-view');
          observer.unobserve(entry.target);
        }
      });
    }, { threshold: 0.18 });

    document.querySelectorAll('.scroll-in').forEach((el) => observer.observe(el));
  </script>
</body>
</html>

