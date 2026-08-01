# CyberHatch Portfolio

Devil Mike's personal developer portfolio — cyberpunk-themed, zero dependencies, single-file deployment.

## Live Demo

Replace `yourusername` with your GitHub username:

```
https://yourusername.github.io/cyberhatch-portfolio/
```

## Deploy to GitHub Pages

1. **Create a new GitHub repo** named `cyberhatch-portfolio`

2. **Push this folder** to the repo:
   ```bash
   cd cyberhatch-portfolio
   git init
   git add .
   git commit -m "initial commit"
   git branch -M main
   git remote add origin https://github.com/YOUR_USERNAME/cyberhatch-portfolio.git
   git push -u origin main
   ```

3. **Enable GitHub Pages:**
   - Go to your repo → **Settings** → **Pages**
   - Under **Source**, select `Deploy from a branch`
   - Set branch to `main` and folder to `/ (root)`
   - Click **Save**

4. **Your site is live** at `https://YOUR_USERNAME.github.io/cyberhatch-portfolio/`

## Customize

- **Hero section**: Edit the `<section class="hero">` block in `index.html`
- **Projects**: Each card lives inside `<div class="projects-grid">` — duplicate or remove cards as needed
- **Terminal commands**: Edit the `commands` object in the `<script>` tag
- **Colors**: Modify CSS variables in `:root` at the top of `<style>`
- **Social links**: Update `href` values in the `.social-links` section

## Tech

- Zero external dependencies
- Single `index.html` file (~500 lines)
- Pure CSS (no Tailwind needed for hosting)
- Vanilla JavaScript
- Google Fonts (JetBrains Mono, Orbitron, Inter)
